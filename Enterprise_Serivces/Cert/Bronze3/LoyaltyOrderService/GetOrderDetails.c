GetOrderDetails()
{
	lr_start_transaction("LoyaltyOrderService_GetOrderDetails");

	web_service_call( "StepName=GetOrderDetails_101",
		"SOAPMethod=LoyaltyOrderService|BasicHttpBinding_ILoyaltyOrderService|GetOrderDetails",
		"ResponseParam=response",
		"Service=LoyaltyOrderService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483558274.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<OrderNumber>50677</OrderNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyOrderService_GetOrderDetails", LR_AUTO);

	return 0;
}
