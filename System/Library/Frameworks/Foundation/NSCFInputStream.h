//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSInputStream.h>

__attribute__((visibility("hidden")))
@interface NSCFInputStream : NSInputStream
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00800000004e7df0
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00800000004e7de8
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x00000000004e80be
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x00000000004e80ae
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_e097db04 *)arg3;	// IMP=0x00000000004e8095
- (_Bool)hasBytesAvailable;	// IMP=0x00000000004e8085
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;	// IMP=0x00000000004e8058
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x00000000004e8048
- (id)streamError;	// IMP=0x00000000004e8036
- (unsigned long long)streamStatus;	// IMP=0x00000000004e802c
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00000000004e7ff7
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00000000004e7fc2
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000004e7faf
- (id)propertyForKey:(id)arg1;	// IMP=0x00000000004e7f9a
- (void)setDelegate:(id)arg1;	// IMP=0x00000000004e7ecb
- (id)delegate;	// IMP=0x00000000004e7ec1
- (void)close;	// IMP=0x00000000004e7eb7
- (void)open;	// IMP=0x00000000004e7ead
- (id)initWithURL:(id)arg1;	// IMP=0x00000000004e7e81
- (id)initWithFileAtPath:(id)arg1;	// IMP=0x00000000004e7e1a
- (id)initWithData:(id)arg1;	// IMP=0x00000000004e7dfc
- (unsigned long long)retainCount;	// IMP=0x00000000004e7dde
- (_Bool)retainWeakReference;	// IMP=0x00000000004e7dcd
- (_Bool)allowsWeakReference;	// IMP=0x00000000004e7dbd
- (oneway void)release;	// IMP=0x00000000004e7db3
- (id)retain;	// IMP=0x00000000004e7d9b
- (unsigned long long)hash;	// IMP=0x00000000004e7d91
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004e7d6e

@end

