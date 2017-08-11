TranslateSkuToAllSparkID()
{
	lr_start_transaction("ProductService_TranslateSkuToAllSparkID");

	web_service_call( "StepName=TranslateSkuToAllSparkID_101",
		"SOAPMethod=ProductService|ProductServiceHttp|TranslateSkuToAllSparkID",
		"ResponseParam=response",
		"Service=ProductService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484779694.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<SKU>620002</SKU>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ProductService_TranslateSkuToAllSparkID", LR_AUTO);

	return 0;
}
