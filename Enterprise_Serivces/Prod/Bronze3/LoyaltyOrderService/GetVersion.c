GetVersion()
{
	lr_start_transaction("LoyaltyOrderService_GetVersion");

	web_service_call( "StepName=GetVersion_103",
		"SOAPMethod=LoyaltyOrderService|BasicHttpBinding_ILoyaltyOrderService|GetVersion",
		"ResponseParam=response",
		"Service=LoyaltyOrderService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483559895.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyOrderService_GetVersion", LR_AUTO);

	return 0;
}
