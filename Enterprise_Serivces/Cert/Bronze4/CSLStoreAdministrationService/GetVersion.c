GetVersion()
{
	lr_start_transaction("StoreAdministrationService_GetVersion");

	web_service_call( "StepName=GetVersion_103",
		"SOAPMethod=StoreAdministrationService|BasicHttpBinding_IStoreAdministrationService|GetVersion",
		"ResponseParam=response",
		"Service=StoreAdministrationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484170245.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreAdministrationService_GetVersion", LR_AUTO);

	return 0;
}
