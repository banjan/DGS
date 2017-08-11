PurchaseDigitalToken()
{
	//ADD RANDOMLY GENERATED GUID
	//Take purchased digital token and pass into ReleaseDigitalToken
	
	lr_start_transaction("AllSparkService_PurchaseDigitalToken");

	web_service_call( "StepName=PurchaseDigitalToken_101",
		"SOAPMethod=AllSparkService|BasicHttpBinding_IAllSparkService|PurchaseDigitalToken",
		"ResponseParam=response",
		"Service=AllSparkService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487352929.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CountryCode>US</CountryCode>"
				"<International>"
					"<Locale>en-US</Locale>"
					"<TZ>CST</TZ>"
				"</International>"
				"<PartnerKey>TEST-US</PartnerKey>"
				"<AllSparkID>20180</AllSparkID>"
				"<CPItemGUID>587d8dd4-b3f7-4677-b3ba-265bff0fc129</CPItemGUID>"
				"<CPReference>a0a82949-0746-4158-a1cf-a85dd6265274</CPReference>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("AllSparkService_PurchaseDigitalToken", LR_AUTO);
	
	lr_xml_find("XML={response}",
	            "Query=/s:Envelope[1]/s:Body[1]/*/*/a:DLCResponseType[1]",
	            "Value=Success",
	            LAST);
	
	return 0;
}
