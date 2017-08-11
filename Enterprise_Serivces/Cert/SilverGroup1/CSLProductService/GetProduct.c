GetProduct()
{
	lr_start_transaction("ProductService_GetProduct");

	web_service_call( "StepName=GetProduct_101",
		"SOAPMethod=ProductService|ProductServiceHttp|GetProduct",
		"ResponseParam=response",
		"Service=ProductService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484775056.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<ProductID>10</ProductID>"
				"<Sku>181060</Sku>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ProductService_GetProduct", LR_AUTO);
	
	lr_xml_find("XML={response}",
	            "Query=/s:Envelope[1]/s:Body[1]/*/*/a:Product[1]/b:Sku[1]/b:StockKeepingUnit[1]/b:Sku[1]/text()[1]",
	            "Value=181060",
	            LAST);

	return 0;
}
