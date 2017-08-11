FinalizeDigitalToken()
{
	//
	
	lr_start_transaction("AllSparkService_FinalizeDigitalToken");

	web_service_call( "StepName=FinalizeDigitalToken_101",
		"SOAPMethod=AllSparkService|BasicHttpBinding_IAllSparkService|FinalizeDigitalToken",
		"ResponseParam=response",
		"Service=AllSparkService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487353023.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CountryCode>US</CountryCode>"
				"<International nil=\"true\"></International>"
				"<PartnerKey>TEST-US</PartnerKey>"
				"<CPItemGUID>587d8dd4-b3f7-4677-b3ba-265bff0fc128</CPItemGUID>"
				"<CPReference>a0a82949-0746-4158-a1cf-a85dd6265273&lt;</CPReference>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("AllSparkService_FinalizeDigitalToken", LR_AUTO);
	
	lr_xml_find("XML={response}",
	            "Query=/s:Envelope[1]/s:Body[1]/*/*/a:DLCResponseType[1]",
	            "Value=Success",
	            LAST);
	
	return 0;
}
