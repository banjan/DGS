IsServiceAlive()
{
	lr_start_transaction("ConfigurationService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_101",
		"SOAPMethod=ConfigurationService|BasicHttpBinding_IServiceBase|IsServiceAlive",
		"ResponseParam=response",
		"Service=ConfigurationService1",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485794993.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ConfigurationService_IsServiceAlive", LR_AUTO);

	return 0;
}
