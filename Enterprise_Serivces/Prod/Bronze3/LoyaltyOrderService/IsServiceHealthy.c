IsServiceHealthy()
{
	lr_start_transaction("LoyaltyOrderService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_103",
		"SOAPMethod=LoyaltyOrderService|BasicHttpBinding_ILoyaltyOrderService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=LoyaltyOrderService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483560061.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("LoyaltyOrderService_IsServiceHealthy", LR_AUTO);

	return 0;
}
