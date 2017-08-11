StoreNonce()
{
	lr_start_transaction("NonceService_StoreNonce");

	web_service_call( "StepName=StoreNonce_101",
		"SOAPMethod=NonceService|BasicHttpBinding_INonceService|StoreNonce",
		"ResponseParam=response",
		"Service=NonceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483629136.inf",
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
				"<NonceType>IsIssued</NonceType>"
			"</request>",
			
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("NonceService_StoreNonce", LR_AUTO);

	return 0;
}
