GetVersion()
{
	lr_start_transaction("StoreService_GetVersion");

	web_service_call( "StepName=GetVersion_102",
		"SOAPMethod=StoreService|StoreService|GetVersion",
		"ResponseParam=response",
		"Service=StoreService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484887020.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreService_GetVersion", LR_AUTO);

	return 0;
}
