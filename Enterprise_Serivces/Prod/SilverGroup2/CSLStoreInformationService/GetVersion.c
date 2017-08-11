GetVersion()
{
	lr_start_transaction("StoreInformationService_GetVersion");

	web_service_call( "StepName=GetVersion_105",
		"SOAPMethod=StoreInformationService|BasicHttpBinding_IStoreInformationService|GetVersion",
		"ResponseParam=response",
		"Service=StoreInformationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484783647.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreInformationService_GetVersion", LR_AUTO);

	return 0;
}
