IsServiceHealthy()
{
	lr_start_transaction("ConfigurationService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_101",
		"SOAPMethod=ConfigurationService|BasicHttpBinding_IServiceBase|IsServiceHealthy",
		"ResponseParam=response",
		"Service=ConfigurationService1",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485795034.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ConfigurationService_IsServiceHealthy", LR_AUTO);

	return 0;
}
