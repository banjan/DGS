GetOrderDetailsBatch()
{
	lr_start_transaction("LoyaltyOrderService_GetOrderDetailsBatch");

	web_service_call( "StepName=GetOrderDetailsBatch_101",
		"SOAPMethod=LoyaltyOrderService|BasicHttpBinding_ILoyaltyOrderService|GetOrderDetailsBatch",
		"ResponseParam=response",
		"Service=LoyaltyOrderService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483559454.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<OrderNumbers>"
					"<int>50677</int>"
				"</OrderNumbers>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyOrderService_GetOrderDetailsBatch", LR_AUTO);

	return 0;
}
