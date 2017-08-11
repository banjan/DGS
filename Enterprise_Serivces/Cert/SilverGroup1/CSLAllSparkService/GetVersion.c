GetVersion()
{
	lr_start_transaction("AllSparkService_GetVersion");

	web_service_call( "StepName=GetVersion_103",
		"SOAPMethod=AllSparkService|AllSparkServiceBase_HTTP|GetVersion",
		"ResponseParam=response",
		"Service=AllSparkService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485809319.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("AllSparkService_GetVersion", LR_AUTO);

	return 0;
}
