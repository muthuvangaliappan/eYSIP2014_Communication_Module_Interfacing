#include"lcd.h"
void USART_Transmit( unsigned char data )
{
	/* Wait for empty transmit buffer */
	while ( !( UCSRA & (1<<UDRE)) )
	;
	/* Put data into buffer, sends the data */
	UDR = data;
}

void cmdmode()
{
	USART_Transmit( '+' );
	USART_Transmit( '+' );
	USART_Transmit( '+' );
	_delay_ms();
	
}
void atdl(unsigned char destination[4])
{
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x64);
	USART_Transmit(0x6C);
	USART_Transmit(destination[3]);
	USART_Transmit(destination[2]);
    USART_Transmit(destination[1]);
	USART_Transmit(destination[0]);
	USART_Transmit(0x0D);
	
	

	_delay_ms(200);
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x77);
	USART_Transmit(0x72);
	USART_Transmit(0x0D);

	
	_delay_ms(200);
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x63);
	USART_Transmit(0x6E);
	USART_Transmit(0x0D);
	
}
void atdl(unsigned char destination[4])
{
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x64);
	USART_Transmit(0x6C);
	USART_Transmit(destination[3]);
	USART_Transmit(destination[2]);
	USART_Transmit(destination[1]);
	USART_Transmit(destination[0]);
	USART_Transmit(0x0D);
	
	

	_delay_ms(200);
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x77);
	USART_Transmit(0x72);
	USART_Transmit(0x0D);

	
	_delay_ms(200);
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x63);
	USART_Transmit(0x6E);
	USART_Transmit(0x0D);
	
}
void atdh(unsigned char high[4])
{
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x64);
	USART_Transmit(0x6C);
	USART_Transmit(high[3]);
	USART_Transmit(high[2]);
	USART_Transmit(high[1]);
	USART_Transmit(high[0]);
	USART_Transmit(0x0D);
	
	

	_delay_ms(200);
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x77);
	USART_Transmit(0x72);
	USART_Transmit(0x0D);

	
	_delay_ms(200);
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x63);
	USART_Transmit(0x6E);
	USART_Transmit(0x0D);
	
}
void atch(unsigned char ch[2])
{
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x63);
	USART_Transmit(0x68);
	USART_Transmit(ch[1]);
	USART_Transmit(ch[0]);
	USART_Transmit(0x0D);
	
	

	_delay_ms(200);
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x77);
	USART_Transmit(0x72);
	USART_Transmit(0x0D);

	
	_delay_ms(200);
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x63);
	USART_Transmit(0x6E);
	USART_Transmit(0x0D);
	
}
void atid(unsigned char id[4])
{
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x69);
	USART_Transmit(0x64);
	USART_Transmit(id[3]);
	USART_Transmit(id[2]);
	USART_Transmit(id[1]);
	USART_Transmit(id[0]);
	USART_Transmit(0x0D);
	
	

	_delay_ms(200);
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x77);
	USART_Transmit(0x72);
	USART_Transmit(0x0D);

	
	_delay_ms(200);
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x63);
	USART_Transmit(0x6E);
	USART_Transmit(0x0D);
	
}
void atmy(unsigned char my[4])
{
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x6d);
	USART_Transmit(0x79);
	USART_Transmit(my[3]);
	USART_Transmit(my[2]);
	USART_Transmit(my[1]);
	USART_Transmit(my[0]);
	USART_Transmit(0x0D);
	
	

	_delay_ms(200);
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x77);
	USART_Transmit(0x72);
	USART_Transmit(0x0D);

	
	_delay_ms(200);
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x63);
	USART_Transmit(0x6E);
	USART_Transmit(0x0D);
	
}
void atmm(unsigned char mm)
{
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x64);
	USART_Transmit(0x6C);
	USART_Transmit(mm);
	USART_Transmit(0x0D);
	
	

	_delay_ms(200);
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x77);
	USART_Transmit(0x72);
	USART_Transmit(0x0D);

	
	_delay_ms(200);
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x63);
	USART_Transmit(0x6E);
	USART_Transmit(0x0D);
	
}
void atce(unsigned char ce)
{
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x63);
	USART_Transmit(0x65);
	USART_Transmit(ce);
	USART_Transmit(0x0D);
	
	

	_delay_ms(200);
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x77);
	USART_Transmit(0x72);
	USART_Transmit(0x0D);

	
	_delay_ms(200);
	USART_Transmit(0x61);
	USART_Transmit(0x74);
	USART_Transmit(0x63);
	USART_Transmit(0x6E);
	USART_Transmit(0x0D);
}
void atsc(unsigned char sc[4])
	{
		USART_Transmit(0x61);
		USART_Transmit(0x74);
		USART_Transmit(0x73);
		USART_Transmit(0x63);
		USART_Transmit(sc[3]);
		USART_Transmit(sc[2]);
		USART_Transmit(sc[1]);
		USART_Transmit(sc[0]);
		USART_Transmit(0x0D);
		
		

		_delay_ms(200);
		USART_Transmit(0x61);
		USART_Transmit(0x74);
		USART_Transmit(0x77);
		USART_Transmit(0x72);
		USART_Transmit(0x0D);

		
		_delay_ms(200);
		USART_Transmit(0x61);
		USART_Transmit(0x74);
		USART_Transmit(0x63);
		USART_Transmit(0x6E);
		USART_Transmit(0x0D);
		
	}
	void atsd(unsigned char sd[2])
	{
		USART_Transmit(0x61);
		USART_Transmit(0x74);
		USART_Transmit(0x73);
		USART_Transmit(0x64);
		USART_Transmit(sd[1]);
		USART_Transmit(sd[0]);
		USART_Transmit(0x0D);
		
		

		_delay_ms(200);
		USART_Transmit(0x61);
		USART_Transmit(0x74);
		USART_Transmit(0x77);
		USART_Transmit(0x72);
		USART_Transmit(0x0D);

		
		_delay_ms(200);
		USART_Transmit(0x61);
		USART_Transmit(0x74);
		USART_Transmit(0x63);
		USART_Transmit(0x6E);
		USART_Transmit(0x0D);
		
	}
		void ata1(unsigned char a1[2])
		{
			USART_Transmit(0x61);
			USART_Transmit(0x74);
			USART_Transmit(0x61);
			USART_Transmit(0x31);
			USART_Transmit(a1[1]);
			USART_Transmit(a1[0]);
			USART_Transmit(0x0D);
			
			

			_delay_ms(200);
			USART_Transmit(0x61);
			USART_Transmit(0x74);
			USART_Transmit(0x77);
			USART_Transmit(0x72);
			USART_Transmit(0x0D);

			
			_delay_ms(200);
			USART_Transmit(0x61);
			USART_Transmit(0x74);
			USART_Transmit(0x63);
			USART_Transmit(0x6E);
			USART_Transmit(0x0D);
			
		}
			void ata2(unsigned char a2)
			{
				USART_Transmit(0x61);
				USART_Transmit(0x74);
				USART_Transmit(0x61);
				USART_Transmit(0x32);
				USART_Transmit(a2);
				USART_Transmit(0x0D);
				
				

				_delay_ms(200);
				USART_Transmit(0x61);
				USART_Transmit(0x74);
				USART_Transmit(0x77);
				USART_Transmit(0x72);
				USART_Transmit(0x0D);

				
				_delay_ms(200);
				USART_Transmit(0x61);
				USART_Transmit(0x74);
				USART_Transmit(0x63);
				USART_Transmit(0x6E);
				USART_Transmit(0x0D);
				
			}
				void ata1(unsigned char a1[2])
				{
					USART_Transmit(0x61);
					USART_Transmit(0x74);
					USART_Transmit(0x61);
					USART_Transmit(0x31);
					USART_Transmit(a1[1]);
					USART_Transmit(a1[0]);
					USART_Transmit(0x0D);
					
					

					_delay_ms(200);
					USART_Transmit(0x61);
					USART_Transmit(0x74);
					USART_Transmit(0x77);
					USART_Transmit(0x72);
					USART_Transmit(0x0D);

					
					_delay_ms(200);
					USART_Transmit(0x61);
					USART_Transmit(0x74);
					USART_Transmit(0x63);
					USART_Transmit(0x6E);
					USART_Transmit(0x0D);
					
				}
					void atai(unsigned char ai)
					{
						USART_Transmit(0x61);
						USART_Transmit(0x74);
						USART_Transmit(0x61);
						USART_Transmit(0x69);
						USART_Transmit(ai);
						USART_Transmit(0x0D);
						
						

						_delay_ms(200);
						USART_Transmit(0x61);
						USART_Transmit(0x74);
						USART_Transmit(0x77);
						USART_Transmit(0x72);
						USART_Transmit(0x0D);

						
						_delay_ms(200);
						USART_Transmit(0x61);
						USART_Transmit(0x74);
						USART_Transmit(0x63);
						USART_Transmit(0x6E);
						USART_Transmit(0x0D);
						
					}
						void atas(unsigned char as)
						{
							USART_Transmit(0x61);
							USART_Transmit(0x74);
							USART_Transmit(0x61);
							USART_Transmit(0x73);
							USART_Transmit(as);
							USART_Transmit(0x0D);
							
							

							_delay_ms(200);
							USART_Transmit(0x61);
							USART_Transmit(0x74);
							USART_Transmit(0x77);
							USART_Transmit(0x72);
							USART_Transmit(0x0D);

							
							_delay_ms(200);
							USART_Transmit(0x61);
							USART_Transmit(0x74);
							USART_Transmit(0x63);
							USART_Transmit(0x6E);
							USART_Transmit(0x0D);
							
						}
							void ated(unsigned char ed)
							{
								USART_Transmit(0x61);
								USART_Transmit(0x74);
								USART_Transmit(0x65);
								USART_Transmit(0x64);
								USART_Transmit(ed);
								USART_Transmit(0x0D);
								
								
								_delay_ms(200);
								USART_Transmit(0x61);
								USART_Transmit(0x74);
								USART_Transmit(0x77);
								USART_Transmit(0x72);
								USART_Transmit(0x0D);

								
								_delay_ms(200);
								USART_Transmit(0x61);
								USART_Transmit(0x74);
								USART_Transmit(0x63);
								USART_Transmit(0x6E);
								USART_Transmit(0x0D);
								
							}
								void atee(unsigned char ee)
								{
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x65);
									USART_Transmit(0x65);
									USART_Transmit(ee);
									USART_Transmit(0x0D);
									
									

									_delay_ms(200);
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x77);
									USART_Transmit(0x72);
									USART_Transmit(0x0D);

									
									_delay_ms(200);
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x63);
									USART_Transmit(0x6E);
									USART_Transmit(0x0D);
									
								}
									void atky(unsigned char ky)
									{
										USART_Transmit(0x61);
										USART_Transmit(0x74);
										USART_Transmit(0x6b);
										USART_Transmit(0x79);
										USART_Transmit(ky);
										USART_Transmit(0x0D);
										
										

										_delay_ms(200);
										USART_Transmit(0x61);
										USART_Transmit(0x74);
										USART_Transmit(0x77);
										USART_Transmit(0x72);
										USART_Transmit(0x0D);

										
										_delay_ms(200);
										USART_Transmit(0x61);
										USART_Transmit(0x74);
										USART_Transmit(0x63);
										USART_Transmit(0x6E);
										USART_Transmit(0x0D);
										
									}
								void atpl(unsigned char pl)
								{
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x70);
									USART_Transmit(0x6c);
									USART_Transmit(pl);
									USART_Transmit(0x0D);									
									

									_delay_ms(200);
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x77);
									USART_Transmit(0x72);
									USART_Transmit(0x0D);

									
									_delay_ms(200);
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x63);
									USART_Transmit(0x6E);
									USART_Transmit(0x0D);
									
							}
							void atca(unsigned char ca[2])
							{
								USART_Transmit(0x61);
								USART_Transmit(0x74);
								USART_Transmit(0x63);
								USART_Transmit(0x61);
								USART_Transmit(ca[1]);
								USART_Transmit(ca[0]);
								USART_Transmit(0x0D);
								
								

								_delay_ms(200);
								USART_Transmit(0x61);
								USART_Transmit(0x74);
								USART_Transmit(0x77);
								USART_Transmit(0x72);
								USART_Transmit(0x0D);

								
								_delay_ms(200);
								USART_Transmit(0x61);
								USART_Transmit(0x74);
								USART_Transmit(0x63);
								USART_Transmit(0x6E);
								USART_Transmit(0x0D);
								
							}
								void atsm(unsigned char sm)
								{
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x73);
									USART_Transmit(0x6d);
									USART_Transmit(sm);
									USART_Transmit(0x0D);
									
									

									_delay_ms(200);
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x77);
									USART_Transmit(0x72);
									USART_Transmit(0x0D);

									
									_delay_ms(200);
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x63);
									USART_Transmit(0x6E);
									USART_Transmit(0x0D);
									
								}
								void atst(unsigned char st[4])
								{
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x73);
									USART_Transmit(0x74);
									USART_Transmit(st[3]);
									USART_Transmit(st[2]);
									USART_Transmit(st[1]);
									USART_Transmit(st[0]);
									USART_Transmit(0x0D);
									
									

									_delay_ms(200);
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x77);
									USART_Transmit(0x72);
									USART_Transmit(0x0D);

									
									_delay_ms(200);
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x63);
									USART_Transmit(0x6E);
									USART_Transmit(0x0D);
									
								}
								void atsp(unsigned char sp[4])
								{
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x73);
									USART_Transmit(0x70);
									USART_Transmit(sp[3]);
									USART_Transmit(sp[2]);
									USART_Transmit(sp[1]);
									USART_Transmit(sp[0]);
									USART_Transmit(0x0D);
									
									

									_delay_ms(200);
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x77);
									USART_Transmit(0x72);
									USART_Transmit(0x0D);

									
									_delay_ms(200);
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x63);
									USART_Transmit(0x6E);
									USART_Transmit(0x0D);
									
								}
								void atdp(unsigned char dp[4])
								{
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x64);
									USART_Transmit(0x70);
									USART_Transmit(dp[3]);
									USART_Transmit(dp[2]);
									USART_Transmit(dp[1]);
									USART_Transmit(dp[0]);
									USART_Transmit(0x0D);
									
									

									_delay_ms(200);
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x77);
									USART_Transmit(0x72);
									USART_Transmit(0x0D);

									
									_delay_ms(200);
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x63);
									USART_Transmit(0x6E);
									USART_Transmit(0x0D);
									
								}
									void atbd(unsigned char sm)
									{
										USART_Transmit(0x61);
										USART_Transmit(0x74);
										USART_Transmit(0x62);
										USART_Transmit(0x70);
										USART_Transmit(bd);
										USART_Transmit(0x0D);
										
										

										_delay_ms(200);
										USART_Transmit(0x61);
										USART_Transmit(0x74);
										USART_Transmit(0x77);
										USART_Transmit(0x72);
										USART_Transmit(0x0D);

										
										_delay_ms(200);
										USART_Transmit(0x61);
										USART_Transmit(0x74);
										USART_Transmit(0x63);
										USART_Transmit(0x6E);
										USART_Transmit(0x0D);
										
									}
							void atro(unsigned char ro[4])
							{
								USART_Transmit(0x61);
								USART_Transmit(0x74);
								USART_Transmit(0x72);
								USART_Transmit(0x6f);
								USART_Transmit(ro[3]);
								USART_Transmit(ro[2]);
								USART_Transmit(ro[1]);
								USART_Transmit(ro[0]);
								USART_Transmit(0x0D);
								
								

								_delay_ms(200);
								USART_Transmit(0x61);
								USART_Transmit(0x74);
								USART_Transmit(0x77);
								USART_Transmit(0x72);
								USART_Transmit(0x0D);

								
								_delay_ms(200);
								USART_Transmit(0x61);
								USART_Transmit(0x74);
								USART_Transmit(0x63);
								USART_Transmit(0x6E);
								USART_Transmit(0x0D);
								
							}
								void atap(unsigned char ap)
								{
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x61);
									USART_Transmit(0x70);
									USART_Transmit(ap);
									USART_Transmit(0x0D);
									
									

									_delay_ms(200);
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x77);
									USART_Transmit(0x72);
									USART_Transmit(0x0D);

									
									_delay_ms(200);
									USART_Transmit(0x61);
									USART_Transmit(0x74);
									USART_Transmit(0x63);
									USART_Transmit(0x6E);
									USART_Transmit(0x0D);
								 	
								}