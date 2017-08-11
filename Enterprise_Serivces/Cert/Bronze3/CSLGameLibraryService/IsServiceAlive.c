IsServiceAlive()
{	
	lr_start_transaction("GameLibraryService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_103",
		"SOAPMethod=GameLibraryService|BasicHttpBinding_IGameLibraryService|IsServiceAlive",
		"ResponseParam=response",
		"Service=GameLibraryService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482859578.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("GameLibraryService_IsServiceAlive", LR_AUTO);

	return 0;
}
