//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _UIViewServiceViewControllerDeputyXPCInterface : NSObject
{
    NSXPCInterface *_exportedInterface;	// 8 = 0x8
    NSXPCInterface *_remoteViewControllerInterface;	// 16 = 0x10
}

+ (id)interfaceWithExportedInterface:(id)arg1 remoteViewControllerInterface:(id)arg2;	// IMP=0x001000000108868b
- (void).cxx_destruct;	// IMP=0x000000000108875f
- (id)connectionInvocation;	// IMP=0x0000000001088743
- (SEL)connectionSelector;	// IMP=0x0000000001088736
- (id)connectionProtocol;	// IMP=0x0000000001088725
- (id)hostObjectInterface;	// IMP=0x0000000001088717
- (id)exportedInterface;	// IMP=0x0000000001088709

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

