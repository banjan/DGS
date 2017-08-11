CancelOrder()
{
	lr_start_transaction("LoyaltyOrderService_CancelOrder");

	web_service_call( "StepName=CancelOrder_101",
		"SOAPMethod=LoyaltyOrderService|BasicHttpBinding_ILoyaltyOrderService|CancelOrder",
		"ResponseParam=response",
		"Service=LoyaltyOrderService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483557650.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request nil=\"true\"></request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyOrderService_CancelOrder", LR_AUTO);

	return 0;
}
