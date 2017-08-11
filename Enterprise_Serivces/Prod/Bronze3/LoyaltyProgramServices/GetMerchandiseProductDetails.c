GetMerchandiseProductDetails()
{
	lr_start_transaction("LoyaltyMerchandisingService_GetMerchandisedProductDetails");
	
	web_service_call( "StepName=GetMerchandisedProductDetails_101",
		"SOAPMethod=LoyaltyMerchandisingService|BasicHttpBinding_ILoyaltyMerchandisingService|GetMerchandisedProductDetails",
		"ResponseParam=response",
		"Service=LoyaltyMerchandisingService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1488485305.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CategoryType>Coupon</CategoryType>"
				"<SKU>334</SKU>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyMerchandisingService_GetMerchandisedProductDetails", LR_AUTO);

	return 0;
}
