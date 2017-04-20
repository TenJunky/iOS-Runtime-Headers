/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSuicaPassProperties : NSObject {
    PKFelicaPassProperties * _felicaProperties;
}

@property (getter=isBlacklisted, nonatomic, readonly) BOOL blacklisted;
@property (getter=isGreenCarTicketUsed, nonatomic, readonly) BOOL greenCarTicketUsed;
@property (getter=isInShinkansenStation, nonatomic, readonly) BOOL inShinkansenStation;
@property (getter=isInStation, nonatomic, readonly) BOOL inStation;
@property (nonatomic, readonly, copy) NSDecimalNumber *transitBalance;
@property (nonatomic, readonly, copy) NSString *transitBalanceCurrencyCode;

+ (id)passPropertiesForPass:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithProperties:(id)arg1;
- (BOOL)isBlacklisted;
- (BOOL)isGreenCarTicketUsed;
- (BOOL)isInShinkansenStation;
- (BOOL)isInStation;
- (id)transitBalance;
- (id)transitBalanceCurrencyCode;

@end