IsServiceAlive()
{
	lr_start_transaction("LoyaltyOrderService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_103",
		"SOAPMethod=LoyaltyOrderService|BasicHttpBinding_ILoyaltyOrderService|IsServiceAlive",
		"ResponseParam=response",
		"Service=LoyaltyOrderService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483559980.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyOrderService_IsServiceAlive", LR_AUTO);

	return 0;
}
