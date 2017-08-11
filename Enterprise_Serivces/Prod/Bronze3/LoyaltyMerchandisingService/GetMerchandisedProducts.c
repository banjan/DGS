GetMerchandisedProducts()
{
	lr_start_transaction("LoyaltyMerchandisingService_GetMerchandisedProducts");

	web_service_call( "StepName=GetMerchandisedProducts_101",
		"SOAPMethod=LoyaltyMerchandisingService|BasicHttpBinding_ILoyaltyMerchandisingService|GetMerchandisedProducts",
		"ResponseParam=response",
		"Service=LoyaltyMerchandisingService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487781927.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<NumberOfItemsPerPage>100</NumberOfItemsPerPage>"
				"<PageNumber>1</PageNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyMerchandisingService_GetMerchandisedProducts", LR_AUTO);

	return 0;
}
