#import <UIKit/UIKit.h>
#import <QuartzCore/CAMetalLayer.h>
#import <Metal/Metal.h>

/*
 * A Renderer is pretty much a delegate for the view
 */

@interface Renderer : NSObject

@property (nonatomic, copy) NSString *vertexFunctionName;
@property (nonatomic, copy) NSString *fragmentFunctionName;

- (instancetype)initWithLayer:(CAMetalLayer *)metalLayer;

- (id<MTLBuffer>)newBufferWithBytes:(const void *)bytes length:(NSUInteger)length;

- (void)startFrame;
- (void)endFrame;

- (void)drawTrianglesWithInterleavedBuffer:(id<MTLBuffer>)positionBuffer
                               indexBuffer:(id<MTLBuffer>)indexBuffer
                             uniformBuffer:(id<MTLBuffer>)uniformBuffer
                                indexCount:(size_t)indexCount;

@end
