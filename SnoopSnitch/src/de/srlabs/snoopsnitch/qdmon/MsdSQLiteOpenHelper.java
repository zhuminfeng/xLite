package de.srlabs.snoopsnitch.qdmon;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.os.PowerManager;
import android.util.Log;
import de.srlabs.snoopsnitch.util.Utils;

public class MsdSQLiteOpenHelper extends SQLiteOpenHelper {
	private static final String DATABASE_NAME = "msd.db";
	private static final int DATABASE_VERSION = 16;
	private Context context;
	public MsdSQLiteOpenHelper(Context context) {
		super(context, DATABASE_NAME, null, DATABASE_VERSION);
		this.context = context;
	}

	public static void readSQLAsset(Context context, SQLiteDatabase db, String file, Boolean verbose) throws Exception {
		PowerManager pm = (PowerManager) context.getSystemService(Context.POWER_SERVICE);
		PowerManager.WakeLock wl = pm.newWakeLock(PowerManager.PARTIAL_WAKE_LOCK, file);

		Long tmp = System.currentTimeMillis();

		Log.i(MsdService.TAG,"MsdSQLiteOpenHelper.readSQLAsset(" + file + ") called");

		try {
			wl.acquire();
			db.beginTransaction();
			String sql = Utils.readFromAssets(context, file);
			if (verbose){
				Log.i(MsdService.TAG,"MsdSQLiteOpenHelper.readSQLAsset(" + file + "): " + sql);
			}
			for(String statement:sql.split(";")){
				if(statement.trim().length() > 0 && !statement.trim().startsWith("/*!")) {
					if (verbose){
						Log.i(MsdService.TAG,"MsdSQLiteOpenHelper.readSQLAsset(" + file + "): statement=" + statement);
					}
					long startTime = System.currentTimeMillis();
					db.execSQL(statement);
					if(verbose){
						long durationMs = System.currentTimeMillis() - startTime;
						Log.i(MsdService.TAG,"MsdSQLiteOpenHelper.readSQLAsset(" + file + "): statement took " + durationMs);
					}
				}
			}
			db.setTransactionSuccessful();
		} catch (Exception e) {
			throw e;
		} finally {
			db.endTransaction();
			wl.release();
		}
		Log.i(MsdService.TAG,"MsdSQLiteOpenHelper.readSQLAsset(" + file + ") done, took " + (System.currentTimeMillis() - tmp) + "ms");
	}

	@Override
	public void onCreate(SQLiteDatabase db) {
		Log.i(MsdService.TAG,"MsdSQLiteOpenHelper.onCreate() called");
		try{
			readSQLAsset(context, db, "si.sql", true);
			readSQLAsset(context, db, "si_loc.sql", true);
			readSQLAsset(context, db, "sm.sql", true);
			readSQLAsset(context, db, "cell_info.sql", true);
			readSQLAsset(context, db, "sms.sql", true);
			readSQLAsset(context, db, "config.sql", true);
			readSQLAsset(context, db, "mcc.sql", true);
			readSQLAsset(context, db, "mnc.sql", true);
			readSQLAsset(context, db, "hlr_info.sql", true);
			readSQLAsset(context, db, "analysis_tables.sql", true);
			readSQLAsset(context, db, "local.sqlx", true);
			readSQLAsset(context, db, "files.sql", true);
		} catch(Exception e){
			Log.e("MSD","Failed to create database",e);
		}
		Log.i(MsdService.TAG,"MsdSQLiteOpenHelper.onCreate() done");
	}

	@Override
	public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
		// The si.sql statement already contains a "DROP TABLE IF EXISTS" statement
		// Upgrading the database will delete all data
		//db.execSQL("DROP TABLE IF EXISTS session_info;");
		onCreate(db);
	}

}
