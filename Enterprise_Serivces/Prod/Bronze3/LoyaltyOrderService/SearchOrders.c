SearchOrders()
{
	lr_start_transaction("LoyaltyOrderService_SearchAllOrders");

	web_service_call( "StepName=SearchAllOrders_102",
		"SOAPMethod=LoyaltyOrderService|BasicHttpBinding_ILoyaltyOrderService|SearchAllOrders",
		"ResponseParam=response",
		"Service=LoyaltyOrderService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483564407.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerId>1234962778</CustomerId>"
				"<NumberOfItemsPerPage>10</NumberOfItemsPerPage>"
				"<PageNumber>1</PageNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyOrderService_SearchAllOrders", LR_AUTO);

	return 0;
}
