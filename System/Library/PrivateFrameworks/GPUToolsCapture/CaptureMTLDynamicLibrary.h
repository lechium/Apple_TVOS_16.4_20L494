//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, MTLDebugInstrumentationData, NSArray, NSString;
@protocol MTLDevice, MTLDynamicLibrary, MTLDynamicLibrarySPI, MTLLibrary, OS_dispatch_data;

@interface CaptureMTLDynamicLibrary : NSObject
{
    id <MTLDynamicLibrarySPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
    id <MTLLibrary> parentLibrary;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000097bc8
@property(retain, nonatomic) id <MTLLibrary> parentLibrary; // @synthesize parentLibrary;
- (_Bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000097b47
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000097b31
- (void)dealloc;	// IMP=0x0000000000097a43
@property(readonly, nonatomic) _Bool shaderValidationEnabled;
@property(copy, nonatomic) NSArray *relocations;
@property(readonly) NSString *libraryPath;
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSObject<OS_dispatch_data> *binaryData;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000977ef
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000977de
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000009771d
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x00000000000976bd
- (id)originalObject;	// IMP=0x00000000000976af
- (_Bool)serializeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000974fa
@property(readonly) id <MTLDynamicLibrary> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x000000000009740e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property(readonly) NSArray *exportedFunctions;
@property(readonly) NSArray *exportedVariables;
@property(readonly) unsigned long long hash;
@property(readonly) NSArray *importedLibraries;
@property(readonly) NSArray *importedSymbols;
@property(readonly) NSString *installName;
@property(readonly) const CDStruct_5af0f983 *libraryUUID;
@property(readonly) Class superclass;

@end

