IsServiceHealthy()
{
	lr_start_transaction("GameLibraryService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_102",
		"SOAPMethod=GameLibraryService|BasicHttpBinding_IGameLibraryService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=GameLibraryService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482859681.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("GameLibraryService_IsServiceHealthy", LR_AUTO);

	return 0;
}
