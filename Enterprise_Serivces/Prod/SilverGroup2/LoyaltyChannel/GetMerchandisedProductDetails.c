GetMerchandisedProductDetails()
{
	lr_start_transaction("LoyaltyService_GetMerchandisedProductDetails");

	web_service_call( "StepName=GetMerchandisedProductDetails_101",
		"SOAPMethod=LoyaltyService|BasicHttpBinding_LoyaltyService|GetMerchandisedProductDetails",
		"ResponseParam=response",
		"Service=LoyaltyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487022661.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CategoryType>Physical</CategoryType>"
				"<SKU>151137</SKU>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyService_GetMerchandisedProductDetails", LR_AUTO);

	return 0;
}
