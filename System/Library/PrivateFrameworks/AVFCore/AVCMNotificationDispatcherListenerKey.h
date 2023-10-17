//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference, NSString;

__attribute__((visibility("hidden")))
@interface AVCMNotificationDispatcherListenerKey : NSObject
{
    AVWeakReference *_weakReferenceToListener;	// 8 = 0x8
    CDUnknownFunctionPointerType _callback;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    void *_object;	// 32 = 0x20
}

+ (id)listenerKeyWithWeakReferenceToListener:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 name:(id)arg3 object:(void *)arg4;	// IMP=0x00100000000f978b
- (unsigned long long)hash;	// IMP=0x00000000000f99cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f9934
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f98d6
- (void)dealloc;	// IMP=0x00000000000f988c
- (id)initWithWeakReferenceToListener:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 name:(id)arg3 object:(void *)arg4;	// IMP=0x00000000000f97f7
- (id)init;	// IMP=0x00000000000f97db

@end

