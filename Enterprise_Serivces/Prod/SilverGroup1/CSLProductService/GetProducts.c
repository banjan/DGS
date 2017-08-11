GetProducts()
{
	lr_start_transaction("ProductService_GetProducts");

	web_service_call( "StepName=GetProducts_101",
		"SOAPMethod=ProductService|ProductServiceHttp|GetProducts",
		"ResponseParam=response",
		"Service=ProductService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484775970.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<ProductIDs>"
					"<int>10</int>"
				"</ProductIDs>"
				"<Skus>"
					"<string>952123</string>"
				"</Skus>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ProductService_GetProducts", LR_AUTO);
	
	return 0;
}
