IsServiceAlive()
{
	lr_start_transaction("ClientService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_101",
		"SOAPMethod=ClientService|BasicHttpBinding_IClientService|IsServiceAlive",
		"ResponseParam=response",
		"Service=ClientService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482426690.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ClientService_IsServiceAlive", LR_AUTO);

	return 0;
}
