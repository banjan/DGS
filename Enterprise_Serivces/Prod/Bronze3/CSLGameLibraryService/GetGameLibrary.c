GetGameLibrary()
{
	lr_start_transaction("GameLibraryService_GetGameLibrary");

	web_service_call( "StepName=GetGameLibrary_101",
		"SOAPMethod=GameLibraryService|BasicHttpBinding_IGameLibraryService|GetGameLibrary",
		"ResponseParam=response",
		"Service=GameLibraryService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482859235.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>1131768783</CustomerID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("GameLibraryService_GetGameLibrary", LR_AUTO);

	return 0;
}
