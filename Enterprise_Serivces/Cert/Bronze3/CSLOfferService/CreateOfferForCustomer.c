CreateOfferForCustomer()
{	
	lr_start_transaction("OfferService_CreateOfferForCustomer");

	web_service_call( "StepName=CreateOfferForCustomer_102",
		"SOAPMethod=OfferService|BasicHttpBinding_IOfferService|CreateOfferForCustomer",
		"ResponseParam=response",
		"Service=OfferService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483487141.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>PerfTest</MachineName>"
				"<CampaignID>3282</CampaignID>"
				"<CustomerID>1239934086</CustomerID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_xml_get_values("XML={response}",
	                  "Query=/s:Envelope[1]/s:Body[1]/*/*/a:CouponID[1]",
	                  "ValueParam=OfferCouponID",
	                  LAST);

	lr_xml_get_values("XML={response}",
	                  "Query=/s:Envelope[1]/s:Body[1]/*/*/a:CouponCode[1]",
	                  "ValueParam=OfferCouponCode",
	                  LAST);
	
	lr_end_transaction("OfferService_CreateOfferForCustomer", LR_AUTO);

	return 0;
}
