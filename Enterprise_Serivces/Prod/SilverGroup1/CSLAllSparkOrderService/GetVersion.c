GetVersion()
{
	lr_start_transaction("OrderService_GetVersion");

	web_service_call( "StepName=GetVersion_105",
		"SOAPMethod=OrderService|ServiceBase_HTTP|GetVersion",
		"ResponseParam=response",
		"Service=OrderService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485882266.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("OrderService_GetVersion", LR_AUTO);

	return 0;
}
