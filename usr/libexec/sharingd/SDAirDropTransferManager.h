//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSObject, NSString;
@protocol SDAirDropAlertManagerDelegate;

@interface SDAirDropTransferManager
{
    NSObject<SDAirDropAlertManagerDelegate> *delegate;	// 8 = 0x8
    NSObject<SDAirDropAlertManagerDelegate> *_classroomDelegate;	// 16 = 0x10
    NSMutableDictionary *_transferIdentifierToTransfer;	// 24 = 0x18
    NSMutableDictionary *_transferIdentifierToHandler;	// 32 = 0x20
    NSArray *_kvoObservingKeys;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000513b7
@property(retain) NSArray *kvoObservingKeys; // @synthesize kvoObservingKeys=_kvoObservingKeys;
@property(retain) NSMutableDictionary *transferIdentifierToHandler; // @synthesize transferIdentifierToHandler=_transferIdentifierToHandler;
@property(retain) NSMutableDictionary *transferIdentifierToTransfer; // @synthesize transferIdentifierToTransfer=_transferIdentifierToTransfer;
@property(nonatomic) __weak NSObject<SDAirDropAlertManagerDelegate> *classroomDelegate; // @synthesize classroomDelegate=_classroomDelegate;
@property(nonatomic) __weak NSObject<SDAirDropAlertManagerDelegate> *delegate; // @synthesize delegate;
- (id)itemTypesForTransfer:(id)arg1;	// IMP=0x0010000000050c00
- (void)loadAllPersistedTransfers;	// IMP=0x0010000000050808
- (void)cleanUpURL:(id)arg1;	// IMP=0x0010000000050690
- (id)transferURLForTransfer:(id)arg1;	// IMP=0x00100000000505a5
- (id)persistedTransfersBaseURL;	// IMP=0x0010000000050552
- (void)setTransferState:(unsigned long long)arg1 forTransfer:(id)arg2 shouldNotify:(_Bool)arg3 shouldCleanup:(_Bool)arg4;	// IMP=0x0010000000050323
- (void)setTransferState:(unsigned long long)arg1 forTransfer:(id)arg2 shouldNotify:(_Bool)arg3;	// IMP=0x001000000005030e
- (void)failTransfer:(id)arg1 withState:(unsigned long long)arg2 failureReason:(unsigned long long)arg3;	// IMP=0x0010000000050169
- (void)handlerFailedForTransfer:(id)arg1;	// IMP=0x001000000004fedc
- (void)setHandler:(id)arg1 forTransfer:(id)arg2;	// IMP=0x001000000004fabf
- (id)determineHandlerForTransfer:(id)arg1;	// IMP=0x001000000004f631
- (void)connectionInvalidated:(id)arg1;	// IMP=0x001000000004f568
- (void)connectionEstablished:(id)arg1;	// IMP=0x001000000004f2d6
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x001000000004f2ce
- (id)remoteObjectInterface;	// IMP=0x001000000004f2ae
- (id)exportedInterface;	// IMP=0x001000000004f28e
- (id)machServiceName;	// IMP=0x001000000004f281
- (void)transfer:(id)arg1 actionTriggeredForAction:(id)arg2;	// IMP=0x001000000004f0ec
- (void)transferUserResponseUpdated:(id)arg1;	// IMP=0x001000000004ebba
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000004ea7b
- (void)finishedEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x001000000004e971
- (void)errorEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x001000000004e78f
- (void)cancelEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x001000000004e685
- (void)progressEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x001000000004e569
- (void)askEventForRecordID:(id)arg1 withResults:(id)arg2;	// IMP=0x001000000004e0f0
- (void)cleanUpTransfer:(id)arg1;	// IMP=0x001000000004dfe4
- (void)removeTransfer:(id)arg1 shouldCleanup:(_Bool)arg2;	// IMP=0x001000000004ddca
- (void)notifyObserversOfRemovedTransfer:(id)arg1;	// IMP=0x001000000004dd15
- (void)notifyObserversOfUpdatedTransfer:(id)arg1;	// IMP=0x001000000004dc6d
- (void)_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000004dc5b
- (void)_remoteObjectProxyForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004dc49
- (void)invalidate;	// IMP=0x000000000004dc1a
- (void)activate;	// IMP=0x001000000004dbeb
- (id)init;	// IMP=0x001000000004daa9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

