package de.srlabs.msd.active_test;

import de.srlabs.msd.active_test.IActiveTestCallback;

interface IActiveTestService {
	void registerCallback(IActiveTestCallback callback);
	boolean startTest(String ownNumber);
	void setForegroundActivityClass(String className);
	void stopTest();
	void clearResults();
	void clearCurrentResults();
	void clearCurrentFails();
	boolean isTestRunning();
	void setUploadDisabled(boolean uploadDisabled);
}