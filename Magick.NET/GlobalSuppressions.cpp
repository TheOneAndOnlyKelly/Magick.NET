// This file is used by Code Analysis to maintain 
// CA_GLOBAL_SUPPRESS_MESSAGE macros that are applied to this project.
// Project-level suppressions either have no target or are given 
// a specific target and scoped to a namespace, type, member, etc.
//
// To add a suppression to this file, right-click the message in the 
// Code Analysis results, point to "Suppress Message", and click 
// "In Suppression File".
// You do not need to add suppressions to this file manually.

CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Naming", "CA1724:TypeNamesShouldNotMatchNamespaces", Scope="type", Target="ImageMagick.Channels");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Usage", "CA2233:OperationsShouldNotOverflow", MessageId="order-1", Scope="member", Target="ImageMagick.MatrixColor.#.ctor(System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.MagickReader.#Read(Magick.Image*,System.Boolean,System.IO.Stream,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.Nullable`1<ImageMagick.ColorSpace>)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableRectangle.#Initialize(System.Double,System.Double,System.Double,System.Double)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableViewbox.#Initialize(System.Double,System.Double,System.Double,System.Double)");
