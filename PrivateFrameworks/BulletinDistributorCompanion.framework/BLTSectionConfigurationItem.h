/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSectionConfigurationItem : NSObject {
    BOOL  _alwaysSyncSettings;
    BOOL  _optOutOfAttachmentTransmission;
    BOOL  _optOutOfCoordination;
    NSArray * _whitelistedSubtypes;
}

@property (nonatomic) BOOL alwaysSyncSettings;
@property (nonatomic) BOOL optOutOfAttachmentTransmission;
@property (nonatomic) BOOL optOutOfCoordination;
@property (nonatomic, retain) NSArray *whitelistedSubtypes;

- (void).cxx_destruct;
- (BOOL)alwaysSyncSettings;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (BOOL)optOutOfAttachmentTransmission;
- (BOOL)optOutOfCoordination;
- (void)setAlwaysSyncSettings:(BOOL)arg1;
- (void)setOptOutOfAttachmentTransmission:(BOOL)arg1;
- (void)setOptOutOfCoordination:(BOOL)arg1;
- (void)setWhitelistedSubtypes:(id)arg1;
- (id)whitelistedSubtypes;

@end
