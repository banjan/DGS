IsServiceAlive()
{
	lr_start_transaction("StoreAdministrationService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_103",
		"SOAPMethod=StoreAdministrationService|BasicHttpBinding_IStoreAdministrationService|IsServiceAlive",
		"ResponseParam=response",
		"Service=StoreAdministrationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484170329.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreAdministrationService_IsServiceAlive", LR_AUTO);

	return 0;
}
