/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDRecoveryKeyController : NSObject <CDPDRecoveryKeyValidatorInternalDelegate> {
    <CDPDCircleProxy> * _circleProxy;
    CDPContext * _context;
    CDPDPCSController * _pcsController;
    <CDPDSecureBackupProxy> * _sbProxy;
    CDPDSecureBackupController * _secureBackupController;
    <CDPStateUIProviderInternal> * _uiProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)enableBackupWithRecoveryKey:(id)arg1 completion:(id /* block */)arg2;
- (void)generateNewRecoveryKey:(id /* block */)arg1;
- (id)generateRecoveryKeyWithInfo:(id)arg1 error:(id*)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 circleProxy:(id)arg3 secureBackupProxy:(id)arg4 pcsProxy:(id)arg5;
- (void)recoverAndSynchronizeStateWithServer:(id /* block */)arg1;
- (void)recoverState:(id /* block */)arg1;

@end