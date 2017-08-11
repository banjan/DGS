StoreNonce()
{
	lr_start_transaction("RealmNonceService_StoreNonce");

	web_service_call( "StepName=StoreNonce_101",
		"SOAPMethod=RealmNonceService|BasicHttpBinding_IRealmNonceService|StoreNonce",
		"ResponseParam=response",
		"Service=RealmNonceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483981176.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<Nonce>"
					"<Code>abcde</Code>"
					"<Context>abcde</Context>"
					"<Expires>{timeUTC}</Expires>"
					"<Issued>{timeUTC}</Issued>"
					"<NonceID>4435</NonceID>"
				"</Nonce>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmNonceService_StoreNonce", LR_AUTO);
	
	lr_think_time (5);
		
	return 0;
}
