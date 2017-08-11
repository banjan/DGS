GetVersion()
{
	lr_start_transaction("GameLibraryService_GetVersion");

	web_service_call( "StepName=GetVersion_102",
		"SOAPMethod=GameLibraryService|BasicHttpBinding_IGameLibraryService|GetVersion",
		"ResponseParam=response",
		"Service=GameLibraryService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482859461.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("GameLibraryService_GetVersion", LR_AUTO);

	return 0;
}
