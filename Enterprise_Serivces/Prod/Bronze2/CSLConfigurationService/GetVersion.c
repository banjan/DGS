GetVersion()
{
	lr_start_transaction("ConfigurationService_GetVersion");

	web_service_call( "StepName=GetVersion_101",
		"SOAPMethod=ConfigurationService|BasicHttpBinding_IServiceBase|GetVersion",
		"ResponseParam=response",
		"Service=ConfigurationService1",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485794944.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ConfigurationService_GetVersion", LR_AUTO);

	return 0;
}
