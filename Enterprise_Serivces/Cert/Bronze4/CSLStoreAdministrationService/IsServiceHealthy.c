IsServiceHealthy()
{
	lr_start_transaction("StoreAdministrationService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_103",
		"SOAPMethod=StoreAdministrationService|BasicHttpBinding_IStoreAdministrationService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=StoreAdministrationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484170485.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreAdministrationService_IsServiceHealthy", LR_AUTO);

	web_service_call( "StepName=IsServiceHealthy_104",
		"SOAPMethod=StoreAdministrationService|BasicHttpBinding_IStoreAdministrationService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=StoreAdministrationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484170587.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);


	return 0;
}
