GetProductShippingRequirements()
{
	lr_start_transaction("ProductService_GetProductShippingRequirements");

	web_service_call( "StepName=GetProductShippingRequirements_101",
		"SOAPMethod=ProductService|ProductServiceHttp|GetProductShippingRequirements",
		"ResponseParam=response",
		"Service=ProductService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484776680.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<ShippingRequirements>"
					"<ShippingRequirement>"
						"<Quantity>0</Quantity>"
						"<Sku>952123</Sku>"
					"</ShippingRequirement>"
				"</ShippingRequirements>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ProductService_GetProductShippingRequirements", LR_AUTO);

	return 0;
}
