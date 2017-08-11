IsServiceHealthy()
{
	lr_start_transaction("ClientService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_101",
		"SOAPMethod=ClientService|BasicHttpBinding_IClientService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=ClientService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482426738.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ClientService_IsServiceHealthy", LR_AUTO);

	return 0;
}
