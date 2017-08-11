IsServiceAlive()
{
	lr_start_transaction("ECommerceService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_101",
		"SOAPMethod=ECommerceService|ECommerceService|IsServiceAlive",
		"ResponseParam=response",
		"Service=ECommerceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484881739.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ECommerceService_IsServiceAlive", LR_AUTO);

	return 0;
}
