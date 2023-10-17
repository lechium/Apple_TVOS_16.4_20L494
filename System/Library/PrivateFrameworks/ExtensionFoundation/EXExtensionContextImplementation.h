//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EXExtensionRequest, NSArray, NSExtensionContext, NSString, NSUUID, NSXPCConnection, NSXPCListener;
@protocol EXExtensionContextHosting, EXExtensionContextVending, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface EXExtensionContextImplementation : NSObject
{
    _Bool __dummyExtension;	// 8 = 0x8
    CDUnknownBlockType __requestCleanUpBlock;	// 16 = 0x10
    NSExtensionContext *_extensionContext;	// 24 = 0x18
    EXExtensionRequest *_extensionRequest;	// 32 = 0x20
    id <EXExtensionContextHosting> __extensionHostProxy;	// 40 = 0x28
    NSObject<OS_os_transaction> *__transaction;	// 48 = 0x30
    id __principalObject;	// 56 = 0x38
    id <EXExtensionContextVending> __extensionVendorProxy;	// 64 = 0x40
    NSXPCListener *__auxiliaryListener;	// 72 = 0x48
    NSUUID *__UUID;	// 80 = 0x50
    NSArray *_inputItems;	// 88 = 0x58
    NSXPCConnection *__auxiliaryConnection;	// 96 = 0x60
    CDStruct_4c969caf __extensionHostAuditToken;	// 104 = 0x68
}

+ (id)_derivedExtensionAuxiliaryHostProtocolWithContextClass:(Class)arg1;	// IMP=0x001000000000fa2b
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000fa23
+ (id)_extensionContextForIdentifier:(id)arg1;	// IMP=0x001000000000f99c
+ (id)_extensionContextVendorProtocolWithAllowedErrorClasses:(id)arg1;	// IMP=0x001000000000f84c
+ (id)_defaultExtensionContextVendorProtocol;	// IMP=0x001000000000f7c6
+ (id)_extensionContextHostProtocolWithAllowedPayloadCompletionClasses:(id)arg1 AllowedErrorClasses:(id)arg2;	// IMP=0x001000000000f433
+ (id)_extensionContextHostProtocolAllowedClassesForItems;	// IMP=0x001000000000f1fe
- (void).cxx_destruct;	// IMP=0x00000000000126c9
@property(getter=_isDummyExtension, setter=_setDummyExtension:) _Bool _dummyExtension; // @synthesize _dummyExtension=__dummyExtension;
@property(retain, nonatomic, setter=_setAuxiliaryConnection:) NSXPCConnection *_auxiliaryConnection; // @synthesize _auxiliaryConnection=__auxiliaryConnection;
@property(copy, nonatomic, setter=_setInputItems:) NSArray *inputItems; // @synthesize inputItems=_inputItems;
@property(copy, nonatomic) NSUUID *_UUID; // @synthesize _UUID=__UUID;
@property(retain, setter=_setAuxiliaryListener:) NSXPCListener *_auxiliaryListener; // @synthesize _auxiliaryListener=__auxiliaryListener;
@property(retain, setter=_setExtensionVendorProxy:) id <EXExtensionContextVending> _extensionVendorProxy; // @synthesize _extensionVendorProxy=__extensionVendorProxy;
@property(setter=_setPrincipalObject:) id _principalObject; // @synthesize _principalObject=__principalObject;
@property(retain, getter=_transaction, setter=_setTransaction:) NSObject<OS_os_transaction> *_transaction; // @synthesize _transaction=__transaction;
@property(setter=_setExtensionHostAuditToken:) CDStruct_4c969caf _extensionHostAuditToken; // @synthesize _extensionHostAuditToken=__extensionHostAuditToken;
@property(retain, setter=_setExtensionHostProxy:) id <EXExtensionContextHosting> _extensionHostProxy; // @synthesize _extensionHostProxy=__extensionHostProxy;
@property(retain) EXExtensionRequest *extensionRequest; // @synthesize extensionRequest=_extensionRequest;
@property(readonly) __weak NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
@property(copy, setter=_setRequestCleanUpBlock:) CDUnknownBlockType _requestCleanUpBlock; // @synthesize _requestCleanUpBlock=__requestCleanUpBlock;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000122a7
- (void)___nsx_pingHost:(CDUnknownBlockType)arg1;	// IMP=0x000000000001229c
- (void)_willPerformHostCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012133
@property(readonly, copy) NSString *description;
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011eac
- (void)_loadPreviewImageForPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011d41
- (void)_loadItemForPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011a03
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011793
- (void)cancelRequestWithError:(id)arg1;	// IMP=0x00000000000114c9
- (void)completeRequestReturningItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010b9b
- (void)_completeRequestReturningItemsSecondHalf:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010b90
- (_Bool)_isHost;	// IMP=0x0000000000010b5d
- (void)dealloc;	// IMP=0x0000000000010b08
- (void)invalidate;	// IMP=0x00000000000109f8
- (void)_initializeAuxillaryConnectionWithListenerEndpoint:(id)arg1;	// IMP=0x00000000000104db
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010462
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010457
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010303
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 extensionContext:(id)arg4;	// IMP=0x000000000000fcf1
@property(retain, setter=_setProcessAssertion:) id _processAssertion; // @dynamic _processAssertion;
@property(copy) NSUUID *_pkUUID; // @dynamic _pkUUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

