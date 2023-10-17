//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JSContext, JSVirtualMachine, MISSING_TYPE, NSString;

@interface DYJSScriptingContext : NSObject
{
    struct unordered_map<const char *, OpaqueJSValue *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, OpaqueJSValue *>>> _cache;	// 8 = 0x8
    struct unordered_map<const char *, OpaqueJSString *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, OpaqueJSString *>>> _stringCache;	// 48 = 0x30
    struct OpaqueJSValue *_globalObject;	// 88 = 0x58
    NSString *_filename;	// 96 = 0x60
    JSVirtualMachine *_virtualMachine;	// 104 = 0x68
    JSContext *_context;	// 112 = 0x70
    CDUnknownBlockType _exceptionHandler;	// 120 = 0x78
}

+ (id)sharedContext;	// IMP=0x004000000000a29d
- (id).cxx_construct;	// IMP=0x002000000000a105
- (void).cxx_destruct;	// IMP=0x001000000000a094
@property(copy, nonatomic) CDUnknownBlockType exceptionHandler; // @synthesize exceptionHandler=_exceptionHandler;
@property(readonly, nonatomic) JSContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) JSVirtualMachine *virtualMachine; // @synthesize virtualMachine=_virtualMachine;
- (id)getGlobalJSONObject:(const char *)arg1;	// IMP=0x0010000000009e37
- (_Bool)setGlobalJSONObject:(const char *)arg1 value:(id)arg2;	// IMP=0x0010000000009bef
- (double)getGlobalDouble:(const char *)arg1;	// IMP=0x0010000000009ab6
- (void)setGlobalDouble:(const char *)arg1 value:(double)arg2;	// IMP=0x001000000000998a
- (double)callGlobalFunction:(const char *)arg1;	// IMP=0x00100000000090e9
- (struct OpaqueJSString *)_cachedStringFromString:(const char *)arg1;	// IMP=0x0010000000008a38
- (double)callFunction:(id)arg1 withArguments:(id)arg2;	// IMP=0x00100000000089f6
- (id)getValue:(id)arg1;	// IMP=0x00100000000089e0
- (_Bool)evaluteScript:(id)arg1 scriptURL:(id)arg2;	// IMP=0x00100000000088b7
- (void)_clearCache;	// IMP=0x00100000000087f3
- (void)setValues:(id)arg1;	// IMP=0x00100000000087a1
- (void)setRawArrayValues:(id)arg1 withUint64Values:(unsigned long long *)arg2 andNumCounters:(unsigned long long)arg3;	// IMP=0x001000000000868e
- (MISSING_TYPE *)createArrayRef: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000085f3
- (void)setRawArrayValues:(id)arg1 withUint32Values:(unsigned int *)arg2 andNumCounters:(unsigned long long)arg3;	// IMP=0x00100000000084ed
- (id)setValue:(id)arg1 value:(id)arg2;	// IMP=0x0010000000008497
- (basic_string_eaee8f9a)_jsValueToString:(struct OpaqueJSValue *)arg1;	// IMP=0x001000000000842e
- (basic_string_eaee8f9a)_jsStringToString:(struct OpaqueJSString *)arg1;	// IMP=0x0010000000008351
- (void)dealloc;	// IMP=0x00100000000082f0
- (void)allocNewContext;	// IMP=0x00100000000082a0
- (id)init;	// IMP=0x0010000000008239

@end
