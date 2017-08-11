SearchAllOrders()
{
	lr_start_transaction("LoyaltyOrderService_SearchAllOrders");

	web_service_call( "StepName=SearchAllOrders_101",
		"SOAPMethod=LoyaltyOrderService|BasicHttpBinding_ILoyaltyOrderService|SearchAllOrders",
		"ResponseParam=response",
		"Service=LoyaltyOrderService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483563151.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerId>1234962778</CustomerId>"
				"<EndDate nil=\"true\"></EndDate>"
				"<NumberOfItemsPerPage>10</NumberOfItemsPerPage>"
				"<OrderNumber nil=\"true\"></OrderNumber>"
				"<PageNumber>1</PageNumber>"
				"<StartDate nil=\"true\"></StartDate>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyOrderService_SearchAllOrders", LR_AUTO);

	return 0;
}
