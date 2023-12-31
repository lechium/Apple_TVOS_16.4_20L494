//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ExtensionManager : NSObject
{
}

+ (id)sharedExtensionManager;	// IMP=0x004000000000ebe2
- (_Bool)_requestExtension:(id)arg1 withItem:(id)arg2 error:(id *)arg3;	// IMP=0x004000000000f47e
- (id)_extensionPassingTest:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x001000000000f136
- (id)_extensionToNotifyWithResult:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000efd5
- (id)_extensionToCheckDownloadQueueWithContentType:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000000eeb9
- (_Bool)notifyWithResult:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000ed54
- (_Bool)checkDownloadQueueWithContentType:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000000ec37

@end

